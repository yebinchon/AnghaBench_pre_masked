
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int windres_bfd ;
typedef scalar_t__ rc_uint_type ;
struct TYPE_3__ {int index; int length; int * data; struct TYPE_3__* next; } ;
typedef TYPE_1__ rc_fontdir ;
typedef int bfd_byte ;


 int FUNC_0 (int *,int *,scalar_t__,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static rc_uint_type
FUNC_2 (windres_bfd *VAR_0, rc_uint_type VAR_1, const rc_fontdir *VAR_2)
{
  rc_uint_type VAR_3;
  int VAR_4;
  const rc_fontdir *VAR_5;

  VAR_3 = VAR_1;
  VAR_1 += 2;

  for (VAR_4 = 0, VAR_5 = VAR_2; VAR_5 != ((void*)0); VAR_5 = VAR_5->next, VAR_4++)
    {
      if (VAR_0)
 {
   bfd_byte VAR_6[2];
   FUNC_1 (VAR_0, VAR_6, VAR_5->index);
   FUNC_0 (VAR_0, VAR_6, VAR_1, 2);
   if (VAR_5->length)
     FUNC_0 (VAR_0, VAR_5->data, VAR_1 + 2, VAR_5->length);
 }
      VAR_1 += (rc_uint_type) VAR_5->length + 2;
    }

  if (VAR_0)
    {
      bfd_byte VAR_7[2];
      FUNC_1 (VAR_0, VAR_7, VAR_4);
      FUNC_0 (VAR_0, VAR_7, VAR_3, 2);
    }
  return VAR_1;
}
