
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpt_iop_hba {int max_devices; int pciunit; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct hpt_iop_hba*) ;
 scalar_t__ FUNC_3 (struct hpt_iop_hba*,int) ;
 int FUNC_4 (struct hpt_iop_hba*) ;
 scalar_t__ FUNC_5 (struct hpt_iop_hba*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct hpt_iop_hba*) ;

__attribute__((used)) static int FUNC_8(device_t VAR_2)
{
 struct hpt_iop_hba * VAR_3 = (struct hpt_iop_hba *)FUNC_0(VAR_2);
 int VAR_4;
 int VAR_5 = VAR_0;

 FUNC_2(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_3->max_devices; VAR_4++)
  if (FUNC_3(VAR_3, VAR_4)) {
   FUNC_1(VAR_2, "%d file system is busy. id=%d",
      VAR_3->pciunit, VAR_4);
   goto out;
  }

 if ((VAR_5 = FUNC_6(VAR_2)) != 0)
  goto out;
 if (FUNC_5(VAR_3,
  VAR_1, 60000))
  goto out;
 FUNC_7(VAR_3);

 FUNC_4(VAR_3);
 return (0);
out:
 FUNC_7(VAR_3);
 return VAR_5;
}
