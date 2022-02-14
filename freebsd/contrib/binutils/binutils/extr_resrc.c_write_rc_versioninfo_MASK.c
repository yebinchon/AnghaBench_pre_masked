
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_7__* var; TYPE_8__* fixed; } ;
typedef TYPE_4__ rc_versioninfo ;
struct TYPE_14__ {scalar_t__ charset; scalar_t__ language; struct TYPE_14__* next; } ;
typedef TYPE_5__ rc_ver_varinfo ;
struct TYPE_15__ {int value; int key; struct TYPE_15__* next; } ;
typedef TYPE_6__ rc_ver_stringinfo ;
struct TYPE_11__ {TYPE_5__* var; int key; } ;
struct TYPE_10__ {TYPE_6__* strings; int language; } ;
struct TYPE_12__ {TYPE_2__ var; TYPE_1__ string; } ;
struct TYPE_16__ {int type; TYPE_3__ u; struct TYPE_16__* next; } ;
typedef TYPE_7__ rc_ver_info ;
struct TYPE_17__ {int file_version_ms; int file_version_ls; int product_version_ms; int product_version_ls; scalar_t__ file_flags_mask; scalar_t__ file_flags; scalar_t__ file_os; scalar_t__ file_type; scalar_t__ file_subtype; scalar_t__ file_date_ms; scalar_t__ file_date_ls; } ;
typedef TYPE_8__ rc_fixed_versioninfo ;
typedef int FILE ;




 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, const rc_versioninfo *VAR_1)
{
  const rc_fixed_versioninfo *VAR_2;
  const rc_ver_info *VAR_3;

  VAR_2 = VAR_1->fixed;
  if (VAR_2->file_version_ms != 0 || VAR_2->file_version_ls != 0)
    FUNC_0 (VAR_0, " FILEVERSION %u, %u, %u, %u\n",
      (unsigned int) ((VAR_2->file_version_ms >> 16) & 0xffff),
      (unsigned int) (VAR_2->file_version_ms & 0xffff),
      (unsigned int) ((VAR_2->file_version_ls >> 16) & 0xffff),
      (unsigned int) (VAR_2->file_version_ls & 0xffff));
  if (VAR_2->product_version_ms != 0 || VAR_2->product_version_ls != 0)
    FUNC_0 (VAR_0, " PRODUCTVERSION %u, %u, %u, %u\n",
      (unsigned int) ((VAR_2->product_version_ms >> 16) & 0xffff),
      (unsigned int) (VAR_2->product_version_ms & 0xffff),
      (unsigned int) ((VAR_2->product_version_ls >> 16) & 0xffff),
      (unsigned int) (VAR_2->product_version_ls & 0xffff));
  if (VAR_2->file_flags_mask != 0)
    FUNC_0 (VAR_0, " FILEFLAGSMASK 0x%x\n", (unsigned int) VAR_2->file_flags_mask);
  if (VAR_2->file_flags != 0)
    FUNC_0 (VAR_0, " FILEFLAGS 0x%x\n", (unsigned int) VAR_2->file_flags);
  if (VAR_2->file_os != 0)
    FUNC_0 (VAR_0, " FILEOS 0x%x\n", (unsigned int) VAR_2->file_os);
  if (VAR_2->file_type != 0)
    FUNC_0 (VAR_0, " FILETYPE 0x%x\n", (unsigned int) VAR_2->file_type);
  if (VAR_2->file_subtype != 0)
    FUNC_0 (VAR_0, " FILESUBTYPE 0x%x\n", (unsigned int) VAR_2->file_subtype);
  if (VAR_2->file_date_ms != 0 || VAR_2->file_date_ls != 0)
    FUNC_0 (VAR_0, "/* Date: %u, %u.  */\n",
          (unsigned int) VAR_2->file_date_ms, (unsigned int) VAR_2->file_date_ls);

  FUNC_0 (VAR_0, "BEGIN\n");

  for (VAR_3 = VAR_1->var; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      switch (VAR_3->type)
 {
 case 129:
   {
     const rc_ver_stringinfo *VAR_4;

     FUNC_0 (VAR_0, "  BLOCK \"StringFileInfo\"\n");
     FUNC_0 (VAR_0, "  BEGIN\n");
     FUNC_0 (VAR_0, "    BLOCK ");
     FUNC_1 (VAR_0, VAR_3->u.string.language, -1);
     FUNC_0 (VAR_0, "\n");
     FUNC_0 (VAR_0, "    BEGIN\n");

     for (VAR_4 = VAR_3->u.string.strings; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
       {
  FUNC_0 (VAR_0, "      VALUE ");
  FUNC_1 (VAR_0, VAR_4->key, -1);
  FUNC_0 (VAR_0, ", ");
  FUNC_1 (VAR_0, VAR_4->value, -1);
  FUNC_0 (VAR_0, "\n");
       }

     FUNC_0 (VAR_0, "    END\n");
     FUNC_0 (VAR_0, "  END\n");
     break;
   }

 case 128:
   {
     const rc_ver_varinfo *VAR_5;

     FUNC_0 (VAR_0, "  BLOCK \"VarFileInfo\"\n");
     FUNC_0 (VAR_0, "  BEGIN\n");
     FUNC_0 (VAR_0, "    VALUE ");
     FUNC_1 (VAR_0, VAR_3->u.var.key, -1);

     for (VAR_5 = VAR_3->u.var.var; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
       FUNC_0 (VAR_0, ", 0x%x, %d", (unsigned int) VAR_5->language,
         (int) VAR_5->charset);

     FUNC_0 (VAR_0, "\n  END\n");

     break;
   }
 }
    }

  FUNC_0 (VAR_0, "END\n");
}
