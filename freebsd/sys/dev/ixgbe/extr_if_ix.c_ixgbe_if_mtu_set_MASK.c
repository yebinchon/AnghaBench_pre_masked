
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct adapter {scalar_t__ max_frame_size; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct adapter* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_3, uint32_t VAR_4)
{
 struct adapter *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = 0;

 FUNC_0("ioctl: SIOCIFMTU (Set Interface MTU)");

 if (VAR_4 > VAR_1) {
  VAR_6 = VAR_0;
 } else {
  VAR_5->max_frame_size = VAR_4 + VAR_2;
 }

 return VAR_6;
}
