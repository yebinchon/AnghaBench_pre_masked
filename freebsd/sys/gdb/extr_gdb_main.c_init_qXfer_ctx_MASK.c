
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct qXfer_context {int flushed; int lastmessage; int sb; int xfer_buf; scalar_t__ last_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *,int ,struct qXfer_context*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct qXfer_context *VAR_4, uintmax_t VAR_5)
{


 if (VAR_5 < sizeof("$m#nn"))
  return (VAR_0);

 VAR_5 -= 4;
 VAR_5 = FUNC_2(VAR_5, VAR_1 - 1);

 VAR_4->last_offset = 0;
 VAR_4->flushed = 0;
 VAR_4->lastmessage = 0;
 FUNC_0(&VAR_4->sb, VAR_4->xfer_buf, VAR_5, VAR_2);
 FUNC_1(&VAR_4->sb, VAR_3, VAR_4);
 return (0);
}
