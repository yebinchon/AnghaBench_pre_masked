
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int FUNC_2 (int,struct msg_hdr*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(int VAR_3, struct msg_hdr *VAR_4)
{
 FUNC_4("closing...");
 FUNC_1(((void*)0));
 FUNC_2(VAR_3, VAR_4, 0);

 if (VAR_2) {
  FUNC_3(VAR_2, VAR_0);
  VAR_2 = ((void*)0);
 }

 if (VAR_1 > 0) {
  FUNC_0(VAR_1);
  VAR_1 = 0;
 }
 FUNC_4("done\n");
}
