
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int rc_uint_type ;
struct TYPE_9__ {scalar_t__ length; scalar_t__ data; } ;
struct TYPE_8__ {int length; int w; } ;
struct TYPE_7__ {int length; int s; } ;
struct TYPE_10__ {int word; TYPE_3__ buffer; TYPE_2__ wstring; TYPE_1__ string; scalar_t__ dword; } ;
struct TYPE_11__ {int type; struct TYPE_11__* next; TYPE_4__ u; } ;
typedef TYPE_5__ rc_rcdata_item ;
typedef int bfd_byte ;
typedef int FILE ;







 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int const*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_6 (FILE *VAR_0, const rc_rcdata_item *VAR_1, int VAR_2)
{
  const rc_rcdata_item *VAR_3;

  FUNC_3 (VAR_0, VAR_2);
  FUNC_2 (VAR_0, "BEGIN\n");

  for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      if (VAR_3->type == 132 && VAR_3->u.buffer.length == 0)
 continue;

      switch (VAR_3->type)
 {
 default:
   FUNC_0 ();

 case 129:
   FUNC_3 (VAR_0, VAR_2 + 2);
   FUNC_2 (VAR_0, "%ld", (long) (VAR_3->u.word & 0xffff));
   break;

 case 131:
   FUNC_3 (VAR_0, VAR_2 + 2);
   FUNC_2 (VAR_0, "%luL", (unsigned long) VAR_3->u.dword);
   break;

 case 130:
   FUNC_3 (VAR_0, VAR_2 + 2);
   FUNC_2 (VAR_0, "\"");
   FUNC_1 (VAR_0, VAR_3->u.string.s, VAR_3->u.string.length);
   FUNC_2 (VAR_0, "\"");
   break;

 case 128:
   FUNC_3 (VAR_0, VAR_2 + 2);
   FUNC_2 (VAR_0, "L\"");
   FUNC_4 (VAR_0, VAR_3->u.wstring.w, VAR_3->u.wstring.length);
   FUNC_2 (VAR_0, "\"");
   break;

 case 132:
   FUNC_5 (VAR_0, (rc_uint_type) VAR_3->u.buffer.length,
           (const bfd_byte *) VAR_3->u.buffer.data,
             VAR_3->next != ((void*)0), 0, -1);
     break;
 }

      if (VAR_3->type != 132)
 {
   if (VAR_3->next != ((void*)0))
     FUNC_2 (VAR_0, ",");
   FUNC_2 (VAR_0, "\n");
 }
    }

  FUNC_3 (VAR_0, VAR_2);
  FUNC_2 (VAR_0, "END\n");
}
