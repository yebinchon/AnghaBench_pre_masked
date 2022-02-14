
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int status ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef scalar_t__ (* ofw_cpu_foreach_cb ) (int,int,int,int*) ;
typedef int device_type ;
typedef int cell_t ;
typedef scalar_t__ boolean_t ;
typedef int addr_cells ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int*,int) ;
 int FUNC_3 (int,char*,char*,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (char*,char*) ;

int
FUNC_8(ofw_cpu_foreach_cb VAR_0, boolean_t VAR_1)
{
 phandle_t VAR_2, VAR_3;
 pcell_t VAR_4, VAR_5[2];
 char VAR_6[16];
 char VAR_7[16];
 u_int VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = 0;
 VAR_8 = 0;
 VAR_9 = 0;

 VAR_2 = FUNC_1("/cpus");
 if (VAR_2 == -1)
  return (-1);


 if (FUNC_2(VAR_2, "#address-cells", &VAR_4,
     sizeof(VAR_4)) < 0)
  return (-1);

 for (VAR_3 = FUNC_0(VAR_2); VAR_3 != 0; VAR_3 = FUNC_5(VAR_3),
     VAR_8 = VAR_9) {


  FUNC_6(VAR_7, 0, sizeof(VAR_7));
  VAR_11 = FUNC_3(VAR_3, "device_type", VAR_7,
      sizeof(VAR_7) - 1);
  if (VAR_11 < 0)
   continue;
  if (FUNC_7(VAR_7, "cpu") != 0)
   continue;


  VAR_9++;






  if (VAR_1) {
   VAR_6[0] = '\0';
   FUNC_3(VAR_3, "status", VAR_6, sizeof(VAR_6));
   if (VAR_6[0] != '\0' && FUNC_7(VAR_6, "okay") != 0 &&
    FUNC_7(VAR_6, "ok") != 0 &&
    !FUNC_4(VAR_3, "enable-method"))
     continue;
  }




  VAR_11 = FUNC_2(VAR_3, "reg", VAR_5,
      VAR_4 * sizeof(cell_t));
  if (VAR_11 != VAR_4 * sizeof(cell_t))
   continue;

  if (VAR_0 == ((void*)0) || VAR_0(VAR_8, VAR_3, VAR_4, VAR_5))
   VAR_10++;
 }

 return (VAR_1 ? VAR_10 : VAR_8);
}
