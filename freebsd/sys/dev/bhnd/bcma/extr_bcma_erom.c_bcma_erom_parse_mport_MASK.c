
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcma_erom_mport {void* port_num; void* port_vid; } ;
struct bcma_erom {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bcma_erom*,int *) ;

__attribute__((used)) static int
FUNC_3(struct bcma_erom *VAR_4, struct bcma_erom_mport *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;


 if ((VAR_7 = FUNC_2(VAR_4, &VAR_6)))
  return (VAR_7);

 if (!FUNC_0(VAR_6, VAR_1))
  return (VAR_0);

 VAR_5->port_vid = FUNC_1(VAR_6, VAR_2);
 VAR_5->port_num = FUNC_1(VAR_6, VAR_3);

 return (0);
}
