
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct dcons_crom_softc {int unit; } ;
typedef int off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct dcons_crom_softc *VAR_4)
{
 static off_t VAR_5;



 VAR_5 = (char *)VAR_3 - (char *)VAR_2;




 FUNC_2(&VAR_4->unit, VAR_0, FUNC_0(VAR_5));
 FUNC_2(&VAR_4->unit, VAR_1, FUNC_1(VAR_5));
}
