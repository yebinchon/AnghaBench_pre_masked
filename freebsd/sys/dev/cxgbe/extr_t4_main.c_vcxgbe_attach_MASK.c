
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_info {int viid; struct port_info* pi; } ;
struct port_info {struct adapter* adapter; } ;
struct adapter {int pf; int mbox; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,struct port_info*,struct vi_info*) ;
 int FUNC_1 (struct adapter*,struct vi_info*,int,char*) ;
 int FUNC_2 (int ,struct vi_info*) ;
 struct vi_info* FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct vi_info *VAR_3;
 struct port_info *VAR_4;
 struct adapter *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = VAR_3->pi;
 VAR_5 = VAR_4->adapter;

 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_1 | VAR_0, "t4via");
 if (VAR_6)
  return (VAR_6);
 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_3);
 FUNC_4(VAR_5, 0);
 if (VAR_6)
  return (VAR_6);

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_5(VAR_5, VAR_5->mbox, VAR_5->pf, 0, VAR_3->viid);
  return (VAR_6);
 }
 return (0);
}
