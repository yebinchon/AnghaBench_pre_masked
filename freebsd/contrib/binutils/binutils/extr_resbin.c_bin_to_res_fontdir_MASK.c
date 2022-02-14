
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int windres_bfd ;
struct bin_fontdir_item {char const* index; } ;
typedef int rc_uint_type ;
struct TYPE_5__ {TYPE_3__* fontdir; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ rc_res_resource ;
struct TYPE_7__ {unsigned int length; char const* data; struct TYPE_7__* next; void* index; } ;
typedef TYPE_3__ rc_fontdir ;
typedef char bfd_byte ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int *,char const*,int) ;

__attribute__((used)) static rc_res_resource *
FUNC_4 (windres_bfd *VAR_1, const bfd_byte *VAR_2, rc_uint_type VAR_3)
{
  rc_uint_type VAR_4, VAR_5;
  rc_fontdir *VAR_6, **VAR_7;
  rc_res_resource *VAR_8;

  if (VAR_3 < 2)
    FUNC_2 (FUNC_0("fontdir header"));

  VAR_4 = FUNC_3 (VAR_1, VAR_2, 2);

  VAR_6 = ((void*)0);
  VAR_7 = &VAR_6;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
      const struct bin_fontdir_item *VAR_9;
      rc_fontdir *VAR_10;
      unsigned int VAR_11;

      if (VAR_3 < 56)
 FUNC_2 (FUNC_0("fontdir"));

      VAR_9 = (const struct bin_fontdir_item *) VAR_2;
      VAR_10 = (rc_fontdir *) FUNC_1 (sizeof *VAR_10);
      VAR_10->index = FUNC_3 (VAR_1, VAR_9->index, 2);







      VAR_11 = 56;

      while (VAR_11 < VAR_3 && VAR_2[VAR_11] != '\0')
 ++VAR_11;
      if (VAR_11 >= VAR_3)
 FUNC_2 (FUNC_0("fontdir device name"));
      ++VAR_11;

      while (VAR_11 < VAR_3 && VAR_2[VAR_11] != '\0')
 ++VAR_11;
      if (VAR_11 >= VAR_3)
 FUNC_2 (FUNC_0("fontdir face name"));
      ++VAR_11;

      VAR_10->length = VAR_11;
      VAR_10->data = VAR_2;

      VAR_10->next = ((void*)0);
      *VAR_7 = VAR_10;
      VAR_7 = &VAR_10->next;




      VAR_2 += VAR_11;
      VAR_3 -= VAR_11;
    }

  VAR_8 = (rc_res_resource *) FUNC_1 (sizeof *VAR_8);
  VAR_8->type = VAR_0;
  VAR_8->u.fontdir = VAR_6;

  return VAR_8;
}
