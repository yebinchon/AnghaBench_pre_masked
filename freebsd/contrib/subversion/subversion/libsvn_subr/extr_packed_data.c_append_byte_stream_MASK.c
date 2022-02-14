
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* first_substream; int packed; } ;
typedef TYPE_1__ svn_packed__byte_stream_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(svn_packed__byte_stream_t *VAR_0,
                   svn_stringbuf_t *VAR_1)
{
  FUNC_0(VAR_1, VAR_0->packed);

  for (VAR_0 = VAR_0->first_substream; VAR_0; VAR_0 = VAR_0->next)
    FUNC_1(VAR_0, VAR_1);
}
