
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int unichar ;
typedef int rc_uint_type ;
struct TYPE_9__ {int length; int data; } ;
struct TYPE_8__ {int length; int w; } ;
struct TYPE_7__ {int length; int s; } ;
struct TYPE_10__ {TYPE_3__ buffer; TYPE_2__ wstring; TYPE_1__ string; int dword; int word; } ;
struct TYPE_11__ {int type; TYPE_4__ u; } ;
typedef TYPE_5__ rc_rcdata_item ;
typedef int bfd_byte ;







 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static rc_uint_type
FUNC_4 (const rc_rcdata_item *VAR_1, bfd_byte *VAR_2)
{
  if (! VAR_1)
    return 0;
  switch (VAR_1->type)
 {
    case 129:
      if (VAR_2)
 FUNC_2 (&VAR_0, VAR_2, (rc_uint_type) VAR_1->u.word);
      return 2;
    case 131:
      if (VAR_2)
 FUNC_3 (&VAR_0, VAR_2, (rc_uint_type) VAR_1->u.dword);
      return 4;
    case 130:
      if (VAR_2 && VAR_1->u.string.length)
 FUNC_1 (VAR_2, VAR_1->u.string.s, VAR_1->u.string.length);
      return (rc_uint_type) VAR_1->u.string.length;
    case 128:
      if (VAR_2 && VAR_1->u.wstring.length)
 FUNC_1 (VAR_2, VAR_1->u.wstring.w, VAR_1->u.wstring.length * sizeof (unichar));
      return (rc_uint_type) (VAR_1->u.wstring.length * sizeof (unichar));
    case 132:
      if (VAR_2 && VAR_1->u.buffer.length)
 FUNC_1 (VAR_2, VAR_1->u.buffer.data, VAR_1->u.buffer.length);
      return (rc_uint_type) VAR_1->u.buffer.length;
    default:
      FUNC_0 ();
    }

  return 0;
}
