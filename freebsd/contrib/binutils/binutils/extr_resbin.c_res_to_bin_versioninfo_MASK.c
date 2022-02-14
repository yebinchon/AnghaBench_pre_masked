
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


typedef int windres_bfd ;
struct bin_versioninfo {struct bin_versioninfo* sig2; struct bin_versioninfo* fixed_size; struct bin_versioninfo* size; struct bin_versioninfo* sig1; struct bin_versioninfo* file_date_ls; struct bin_versioninfo* file_date_ms; struct bin_versioninfo* file_subtype; struct bin_versioninfo* file_type; struct bin_versioninfo* file_os; struct bin_versioninfo* file_flags; struct bin_versioninfo* file_flags_mask; struct bin_versioninfo* product_version_ls; struct bin_versioninfo* product_version_ms; struct bin_versioninfo* file_version_ls; struct bin_versioninfo* file_version; } ;
struct bin_ver_info {struct bin_ver_info* sig2; struct bin_ver_info* fixed_size; struct bin_ver_info* size; struct bin_ver_info* sig1; struct bin_ver_info* file_date_ls; struct bin_ver_info* file_date_ms; struct bin_ver_info* file_subtype; struct bin_ver_info* file_type; struct bin_ver_info* file_os; struct bin_ver_info* file_flags; struct bin_ver_info* file_flags_mask; struct bin_ver_info* product_version_ls; struct bin_ver_info* product_version_ms; struct bin_ver_info* file_version_ls; struct bin_ver_info* file_version; } ;
struct bin_fixed_versioninfo {struct bin_fixed_versioninfo* sig2; struct bin_fixed_versioninfo* fixed_size; struct bin_fixed_versioninfo* size; struct bin_fixed_versioninfo* sig1; struct bin_fixed_versioninfo* file_date_ls; struct bin_fixed_versioninfo* file_date_ms; struct bin_fixed_versioninfo* file_subtype; struct bin_fixed_versioninfo* file_type; struct bin_fixed_versioninfo* file_os; struct bin_fixed_versioninfo* file_flags; struct bin_fixed_versioninfo* file_flags_mask; struct bin_fixed_versioninfo* product_version_ls; struct bin_fixed_versioninfo* product_version_ms; struct bin_fixed_versioninfo* file_version_ls; struct bin_fixed_versioninfo* file_version; } ;
struct TYPE_13__ {TYPE_8__* fixed; TYPE_7__* var; } ;
typedef TYPE_4__ rc_versioninfo ;
struct TYPE_14__ {int language; int charset; struct TYPE_14__* next; } ;
typedef TYPE_5__ rc_ver_varinfo ;
struct TYPE_15__ {int value; int key; struct TYPE_15__* next; } ;
typedef TYPE_6__ rc_ver_stringinfo ;
struct TYPE_12__ {TYPE_5__* var; int key; } ;
struct TYPE_10__ {TYPE_6__* strings; int language; } ;
struct TYPE_11__ {TYPE_3__ var; TYPE_1__ string; } ;
struct TYPE_16__ {int type; TYPE_2__ u; struct TYPE_16__* next; } ;
typedef TYPE_7__ rc_ver_info ;
typedef int rc_uint_type ;
struct TYPE_17__ {int file_version_ms; int file_version_ls; int product_version_ms; int product_version_ls; int file_flags_mask; int file_flags; int file_os; int file_type; int file_subtype; int file_date_ms; int file_date_ls; } ;
typedef TYPE_8__ rc_fixed_versioninfo ;
typedef struct bin_versioninfo bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct bin_versioninfo*,int,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,struct bin_versioninfo*,int) ;
 int FUNC_5 (int *,struct bin_versioninfo*,int) ;

__attribute__((used)) static rc_uint_type
FUNC_6 (windres_bfd *VAR_3, rc_uint_type VAR_4,
   const rc_versioninfo *VAR_5)
{
  rc_uint_type VAR_6 = VAR_4;
  rc_uint_type VAR_7;
  struct bin_versioninfo VAR_8;
  rc_ver_info *VAR_9;

  VAR_7 = VAR_4;
  VAR_4 += VAR_1;
  VAR_4 = FUNC_2 (VAR_3, VAR_4, "VS_VERSION_INFO");
  VAR_4 += (4 - ((VAR_4 - VAR_6) & 3)) & 3;

  if (VAR_5->fixed != ((void*)0))
    {
      if (VAR_3)
 {
   struct bin_fixed_versioninfo VAR_10;
   const rc_fixed_versioninfo *VAR_11;

      VAR_11 = VAR_5->fixed;
   FUNC_5 (VAR_3, VAR_10.sig1, 0xfeef04bd);
   FUNC_5 (VAR_3, VAR_10.sig2, 0x10000);
   FUNC_5 (VAR_3, VAR_10.file_version, VAR_11->file_version_ms);
   FUNC_5 (VAR_3, VAR_10.file_version_ls, VAR_11->file_version_ls);
   FUNC_5 (VAR_3, VAR_10.product_version_ms, VAR_11->product_version_ms);
   FUNC_5 (VAR_3, VAR_10.product_version_ls, VAR_11->product_version_ls);
   FUNC_5 (VAR_3, VAR_10.file_flags_mask, VAR_11->file_flags_mask);
   FUNC_5 (VAR_3, VAR_10.file_flags, VAR_11->file_flags);
   FUNC_5 (VAR_3, VAR_10.file_os, VAR_11->file_os);
   FUNC_5 (VAR_3, VAR_10.file_type, VAR_11->file_type);
   FUNC_5 (VAR_3, VAR_10.file_subtype, VAR_11->file_subtype);
   FUNC_5 (VAR_3, VAR_10.file_date_ms, VAR_11->file_date_ms);
   FUNC_5 (VAR_3, VAR_10.file_date_ls, VAR_11->file_date_ls);
   FUNC_1 (VAR_3, &VAR_10, VAR_4, VAR_0);
 }
      VAR_4 += VAR_0;
    }

  for (VAR_9 = VAR_5->var; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      struct bin_ver_info VAR_12;
      rc_uint_type VAR_13;

      VAR_4 += (4 - ((VAR_4 - VAR_6) & 3)) & 3;

      VAR_13 = VAR_4;

      VAR_4 += VAR_2;

      switch (VAR_9->type)
 {
 default:
   FUNC_0 ();
 case 129:
   {
     struct bin_ver_info VAR_14;
     rc_uint_type VAR_15;
     const rc_ver_stringinfo *VAR_16;

     VAR_4 = FUNC_2 (VAR_3, VAR_4, "StringFileInfo");
     VAR_4 += (4 - ((VAR_4 - VAR_6) & 3)) & 3;

     VAR_15 = VAR_4;

     VAR_4 += VAR_2;

     VAR_4 = FUNC_3 (VAR_3, VAR_4, VAR_9->u.string.language);

     for (VAR_16 = VAR_9->u.string.strings; VAR_16 != ((void*)0); VAR_16 = VAR_16->next)
       {
  struct bin_ver_info VAR_17;
  rc_uint_type VAR_18,VAR_19;

  VAR_4 += (4 - ((VAR_4 - VAR_6) & 3)) & 3;

  VAR_18 = VAR_4;
  VAR_4 += VAR_2;

  VAR_4 = FUNC_3 (VAR_3, VAR_4, VAR_16->key);

  VAR_4 += (4 - ((VAR_4 - VAR_6) & 3)) & 3;

  VAR_19 = VAR_4;
  VAR_4 = FUNC_3 (VAR_3, VAR_4, VAR_16->value);
  if (VAR_3)
    {
      FUNC_4 (VAR_3, VAR_17.size, VAR_4 - VAR_18);
      FUNC_4 (VAR_3, VAR_17.sig1, (VAR_4 - VAR_19) / 2);
      FUNC_4 (VAR_3, VAR_17.sig2, 1);
      FUNC_1 (VAR_3, &VAR_17, VAR_18,
              VAR_2);
    }
       }
     if (VAR_3)
       {
  FUNC_4 (VAR_3, VAR_14.size, VAR_4 - VAR_15);
  FUNC_4 (VAR_3, VAR_14.sig1, 0);
  FUNC_4 (VAR_3, VAR_14.sig2, 0);
  FUNC_1 (VAR_3, &VAR_14, VAR_15,
      VAR_2);
       }
     break;
   }

 case 128:
   {
     rc_uint_type VAR_20, VAR_21;
     struct bin_ver_info VAR_22;
     const rc_ver_varinfo *VAR_23;

     VAR_4 = FUNC_2 (VAR_3, VAR_4, "VarFileInfo");

     VAR_4 += (4 - ((VAR_4 - VAR_6) & 3)) & 3;

     VAR_20 = VAR_4;
     VAR_4 += VAR_2;

     VAR_4 = FUNC_3 (VAR_3, VAR_4, VAR_9->u.var.key);

     VAR_4 += (4 - ((VAR_4 - VAR_6) & 3)) & 3;

     VAR_21 = VAR_4;

     for (VAR_23 = VAR_9->u.var.var; VAR_23 != ((void*)0); VAR_23 = VAR_23->next)
       {
  if (VAR_3)
    {
      bfd_byte VAR_24[4];

      FUNC_4 (VAR_3, &VAR_24[0], VAR_23->language);
      FUNC_4 (VAR_3, &VAR_24[2], VAR_23->charset);
      FUNC_1 (VAR_3, VAR_24, VAR_4, 4);
    }
  VAR_4 += 4;
       }
     if (VAR_3)
     {
  FUNC_4 (VAR_3, VAR_22.size, VAR_4 - VAR_20);
  FUNC_4 (VAR_3, VAR_22.sig1, VAR_4 - VAR_21);
  FUNC_4 (VAR_3, VAR_22.sig2, 0);
  FUNC_1 (VAR_3, &VAR_22, VAR_20,
      VAR_2);
     }

     break;
   }
 }

      if (VAR_3)
 {
   FUNC_4 (VAR_3, VAR_12.size, VAR_4-VAR_13);
   FUNC_4 (VAR_3, VAR_12.sig1, 0);
   FUNC_4 (VAR_3, VAR_12.sig2, 0);
   FUNC_1 (VAR_3, &VAR_12, VAR_13,
         VAR_2);
 }
    }

  if (VAR_3)
    {
      FUNC_4 (VAR_3, VAR_8.size, VAR_4 - VAR_7);
      FUNC_4 (VAR_3, VAR_8.fixed_size,
        VAR_5->fixed == ((void*)0) ? 0
             : VAR_0);
      FUNC_4 (VAR_3, VAR_8.sig2, 0);
      FUNC_1 (VAR_3, &VAR_8, VAR_7, VAR_2);
    }
  return VAR_4;
}
