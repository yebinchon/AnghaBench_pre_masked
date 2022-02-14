
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ pci_func; } ;
typedef TYPE_1__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_8)
{
 int VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12 = VAR_0;
 uint32_t VAR_13 = VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_7, &VAR_11);
 if (VAR_9)
  return(VAR_0);

 if (VAR_11 & VAR_1)
  VAR_12 = (VAR_11 & VAR_2) >>
     VAR_3;

 if (VAR_11 & VAR_4)
  VAR_13 = (VAR_11 & VAR_5) >>
     VAR_6;

 if (VAR_8->pci_func == 0)
  VAR_10 = VAR_13;
 else
  VAR_10 = VAR_12;

 return(VAR_10);
}
