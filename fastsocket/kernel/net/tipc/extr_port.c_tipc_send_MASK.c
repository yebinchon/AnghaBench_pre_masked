
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int congested; int connected; } ;
struct port {TYPE_1__ publ; int sent; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iovec const*,unsigned int) ;
 int FUNC_2 (struct port*) ;
 scalar_t__ FUNC_3 (struct port*) ;
 scalar_t__ FUNC_4 (struct port*) ;
 int FUNC_5 (struct port*,struct iovec const*,unsigned int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct port*) ;
 struct port* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct port*,unsigned int,struct iovec const*) ;

int FUNC_9(u32 VAR_3, unsigned int VAR_4, struct iovec const *VAR_5)
{
 struct port *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(VAR_3);
 if (!VAR_6 || !VAR_6->publ.connected)
  return -VAR_0;

 VAR_6->publ.congested = 1;
 if (!FUNC_6(VAR_6)) {
  VAR_7 = FUNC_3(VAR_6);
  if (FUNC_0(VAR_7 != VAR_2))
   VAR_8 = FUNC_5(VAR_6, VAR_5, VAR_4,
          VAR_7);
  else
   VAR_8 = FUNC_8(VAR_6, VAR_4, VAR_5);

  if (FUNC_0(VAR_8 != -VAR_1)) {
   FUNC_2(VAR_6);
   VAR_6->publ.congested = 0;
   VAR_6->sent++;
   return VAR_8;
  }
 }
 if (FUNC_4(VAR_6)) {
  VAR_6->publ.congested = 0;

  return FUNC_1(VAR_5, VAR_4);
 }
 return -VAR_1;
}
