
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int flags; } ;
struct atiixp_info {TYPE_1__ rch; TYPE_1__ pch; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (struct atiixp_info*) ;
 int FUNC_2 (struct atiixp_info*) ;
 int FUNC_3 (struct atiixp_info*,int ) ;
 int FUNC_4 (struct atiixp_info*) ;
 int FUNC_5 (struct atiixp_info*,int ,int) ;
 struct atiixp_info* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct atiixp_info *VAR_7 = FUNC_6(VAR_6);
 uint32_t VAR_8;


 FUNC_2(VAR_7);
 FUNC_1(VAR_7);
 FUNC_4(VAR_7);


 if (VAR_7->pch.flags & VAR_0) {
  FUNC_0(((void*)0), &VAR_7->pch, VAR_5);
  VAR_7->pch.flags |= VAR_1;
 }
 if (VAR_7->rch.flags & VAR_0) {
  FUNC_0(((void*)0), &VAR_7->rch, VAR_5);
  VAR_7->rch.flags |= VAR_1;
 }


 FUNC_2(VAR_7);
 VAR_8 = FUNC_3(VAR_7, VAR_2);
 VAR_8 |= VAR_4 | VAR_3;
 FUNC_5(VAR_7, VAR_2, VAR_4);
 FUNC_4(VAR_7);

 return (0);
}
