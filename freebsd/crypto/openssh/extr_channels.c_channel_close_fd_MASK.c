
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_channels {int channel_max_fd; } ;
struct ssh {struct ssh_channels* chanctxt; } ;


 int FUNC_0 (struct ssh_channels*) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct ssh *VAR_0, int *VAR_1)
{
 struct ssh_channels *VAR_2 = VAR_0->chanctxt;
 int VAR_3 = 0, VAR_4 = *VAR_1;

 if (VAR_4 != -1) {
  VAR_3 = FUNC_1(VAR_4);
  *VAR_1 = -1;
  if (VAR_4 == VAR_2->channel_max_fd)
   FUNC_0(VAR_2);
 }
 return VAR_3;
}
