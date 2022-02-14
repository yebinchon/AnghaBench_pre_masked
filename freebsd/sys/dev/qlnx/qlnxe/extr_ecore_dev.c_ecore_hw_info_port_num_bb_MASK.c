
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {int num_ports_in_engine; } ;


 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 scalar_t__ FUNC_1 (struct ecore_dev*) ;
 int VAR_0 ;
 int FUNC_2 (struct ecore_hwfn*,int,char*,int) ;
 scalar_t__ FUNC_3 (struct ecore_dev*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static void FUNC_5(struct ecore_hwfn *VAR_1,
          struct ecore_ptt *VAR_2)
{
 struct ecore_dev *VAR_3 = VAR_1->p_dev;
 u32 VAR_4;



 if (FUNC_1(VAR_3))
  VAR_4 = 4;
 else if (FUNC_0(VAR_3) && FUNC_3(VAR_3))

  VAR_4 = 1;
 else

 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_0);

 if (VAR_4 < 3) {
  VAR_3->num_ports_in_engine = 1;
 } else if (VAR_4 <= 5) {
  VAR_3->num_ports_in_engine = 2;
 } else {
  FUNC_2(VAR_1, 1, "PORT MODE: %d not supported\n",
     VAR_3->num_ports_in_engine);


  VAR_3->num_ports_in_engine = 1;
 }
}
