
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time_t ;
struct iodesc {int myea; } ;
struct ether_header {int ether_type; int ether_dhost; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct iodesc*,void**,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

ssize_t
FUNC_6(struct iodesc *VAR_3, void **VAR_4, void **VAR_5, time_t VAR_6,
    uint16_t *VAR_7)
{
 ssize_t VAR_8;
 struct ether_header *VAR_9;
 void *VAR_10;






 VAR_10 = ((void*)0);
 VAR_8 = FUNC_3(VAR_3, &VAR_10, VAR_6);
 if (VAR_8 == -1 || VAR_8 < sizeof(*VAR_9)) {
  FUNC_2(VAR_10);
  return (-1);
 }

 VAR_9 = (struct ether_header *)((uintptr_t)VAR_10 + VAR_0);

 if (FUNC_0(VAR_3->myea, VAR_9->ether_dhost, 6) != 0 &&
     FUNC_0(VAR_1, VAR_9->ether_dhost, 6) != 0) {





  FUNC_2(VAR_10);
  return (-1);
 }

 *VAR_4 = VAR_10;
 *VAR_5 = (void *)((uintptr_t)VAR_9 + sizeof(*VAR_9));
 *VAR_7 = FUNC_4(VAR_9->ether_type);

 VAR_8 -= sizeof(*VAR_9);
 return (VAR_8);
}
