
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* buf; } ;
struct xz_dec {scalar_t__ check_type; TYPE_1__ temp; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int,int ) ;

__attribute__((used)) static enum xz_ret FUNC_4(struct xz_dec *VAR_9)
{
 if (!FUNC_2(VAR_9->temp.buf, VAR_0, VAR_1))
  return VAR_5;

 if (FUNC_3(VAR_9->temp.buf + VAR_1, 2, 0)
   != FUNC_1(VAR_9->temp.buf + VAR_1 + 2))
  return VAR_4;

 if (VAR_9->temp.buf[VAR_1] != 0)
  return VAR_7;
 VAR_9->check_type = VAR_9->temp.buf[VAR_1 + 1];
 if (VAR_9->check_type > VAR_2 && !FUNC_0(VAR_9->check_type))
  return VAR_7;


 return VAR_6;
}
