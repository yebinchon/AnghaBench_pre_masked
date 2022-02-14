
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {scalar_t__ ifr_data; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int ,TYPE_1__*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 uint32_t VAR_3;

 VAR_1.ifr_data = (caddr_t)&VAR_3;
 if (FUNC_0(VAR_2, VAR_0, &VAR_1) == -1)
  return;
 FUNC_1("\treqid: %u\n", VAR_3);
}
