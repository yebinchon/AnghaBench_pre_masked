
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct os_time {int sec; int usec; } ;
struct hostapd_neighbor_entry {int lci_date; scalar_t__ stationary; } ;


 scalar_t__ FUNC_0 (struct os_time*) ;
 int FUNC_1 (struct os_time*,int *,struct os_time*) ;

__attribute__((used)) static int FUNC_2(struct hostapd_neighbor_entry *VAR_0, u16 VAR_1)
{
 struct os_time VAR_2, VAR_3;
 unsigned long VAR_4;

 if (VAR_0->stationary || VAR_1 == 0xffff)
  return 1;

 if (!VAR_1)
  return 0;

 if (FUNC_0(&VAR_2))
  return 0;

 FUNC_1(&VAR_2, &VAR_0->lci_date, &VAR_3);


 if (VAR_3.sec > 0xffff)
  return 0;


 VAR_4 = VAR_3.sec * 10 + VAR_3.usec / 100000;

 return VAR_1 > VAR_4;
}
