
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iodesc {int * myea; } ;
struct ether_header {int ether_type; int ether_dhost; int ether_shost; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iodesc*,struct ether_header*,size_t) ;
 int FUNC_3 (char*) ;

ssize_t
FUNC_4(struct iodesc *VAR_1, void *VAR_2, size_t VAR_3, uint8_t *VAR_4, int VAR_5)
{
 ssize_t VAR_6;
 struct ether_header *VAR_7;






 VAR_7 = (struct ether_header *)VAR_2 - 1;
 VAR_3 += sizeof(*VAR_7);

 FUNC_0(VAR_1->myea, VAR_7->ether_shost);
 FUNC_0(VAR_4, VAR_7->ether_dhost);
 VAR_7->ether_type = FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_1, VAR_7, VAR_3);
 if (VAR_6 == -1 || VAR_6 < sizeof(*VAR_7))
  return (-1);

 VAR_6 -= sizeof(*VAR_7);
 return (VAR_6);
}
