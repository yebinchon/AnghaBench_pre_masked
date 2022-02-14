
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_7__ {TYPE_2__* private_data; } ;
typedef TYPE_1__ svn_packed__int_stream_t ;
struct TYPE_8__ {int diff; int is_signed; TYPE_3__* packed; int pool; scalar_t__ item_count; } ;
typedef TYPE_2__ packed_int_private_t ;
typedef int apr_uint64_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_9__ {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,int ) ;
 TYPE_3__* FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(svn_stringbuf_t *VAR_1,
                          svn_packed__int_stream_t *VAR_2)
{
  packed_int_private_t *VAR_3 = VAR_2->private_data;
  apr_uint64_t VAR_4 = FUNC_0(VAR_1);
  apr_size_t VAR_5;
  apr_size_t VAR_6;


  VAR_3->diff = (VAR_4 & 1) != 0;
  VAR_3->is_signed = (VAR_4 & 2) != 0;
  VAR_5 = (apr_size_t)(VAR_4 >> 2);


  VAR_3->item_count = (apr_size_t)FUNC_0(VAR_1);
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4)
    {
      VAR_3->packed = FUNC_2((apr_size_t)VAR_4,
                                                         VAR_3->pool);
      VAR_3->packed->len = (apr_size_t)VAR_4;
    }


  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
    FUNC_3(VAR_1,
                              FUNC_1(VAR_2,
                                                               VAR_0,
                                                               VAR_0));
}
