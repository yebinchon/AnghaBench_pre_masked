
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int unichar ;
typedef int rc_uint_type ;
struct TYPE_9__ {int length; scalar_t__ data; } ;
struct TYPE_8__ {int length; int * w; } ;
struct TYPE_7__ {int length; scalar_t__ s; } ;
struct TYPE_10__ {TYPE_3__ buffer; TYPE_2__ wstring; TYPE_1__ string; int dword; int word; } ;
struct TYPE_11__ {int type; TYPE_4__ u; struct TYPE_11__* next; } ;
typedef TYPE_5__ rc_rcdata_item ;
typedef int bfd_byte ;







 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static rc_uint_type
FUNC_5 (windres_bfd *VAR_0, rc_uint_type VAR_1, const rc_rcdata_item *VAR_2)
{
  const rc_rcdata_item *VAR_3;

  for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      rc_uint_type VAR_4;
      switch (VAR_3->type)
 {
 default:
   FUNC_0 ();
 case 129:
   VAR_4 = 2;
   break;
 case 131:
   VAR_4 = 4;
   break;
 case 130:
   VAR_4 = VAR_3->u.string.length;
   break;
 case 128:
   VAR_4 = VAR_3->u.wstring.length * sizeof (unichar);
   break;
 case 132:
   VAR_4 = VAR_3->u.buffer.length;
   break;
 }
      if (VAR_0)
 {
   bfd_byte VAR_5[4];
   bfd_byte *VAR_6 = &VAR_5[0];
   switch (VAR_3->type)
     {
     case 129:
       FUNC_3 (VAR_0, VAR_6, VAR_3->u.word);
       break;
     case 131:
       FUNC_4 (VAR_0, VAR_6, VAR_3->u.dword);
       break;
     case 130:
       VAR_6 = (bfd_byte *) VAR_3->u.string.s;
   break;
 case 128:
   {
  rc_uint_type VAR_7;

  VAR_6 = (bfd_byte *) FUNC_1 (VAR_4);
     for (VAR_7 = 0; VAR_7 < VAR_3->u.wstring.length; VAR_7++)
    FUNC_3 (VAR_0, VAR_6 + VAR_7 * sizeof (unichar), VAR_3->u.wstring.w[VAR_7]);
   }
       break;
 case 132:
       VAR_6 = (bfd_byte *) VAR_3->u.buffer.data;
   break;
 }
   FUNC_2 (VAR_0, VAR_6, VAR_1, VAR_4);
    }
      VAR_1 += VAR_4;
    }
  return VAR_1;
}
