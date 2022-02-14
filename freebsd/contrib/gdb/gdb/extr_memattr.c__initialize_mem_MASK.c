
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*,int *) ;
 int FUNC_1 (char*,int ,int ,char*) ;
 int FUNC_2 (char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_3 (void)
{
  FUNC_1 ("mem", VAR_0, VAR_4,
    "Define attributes for memory region.\nUsage: mem <lo addr> <hi addr> [<mode> <width> <cache>], \nwhere <mode>  may be rw (read/write), ro (read-only) or wo (write-only), \n      <width> may be 8, 16, 32, or 64, and \n      <cache> may be cache or nocache");





  FUNC_0 ("mem", VAR_0, VAR_7,
    "Enable memory region.\nArguments are the code numbers of the memory regions to enable.\nUsage: enable mem <code number>\nDo \"info mem\" to see current list of code numbers.", &VAR_3);




  FUNC_0 ("mem", VAR_0, VAR_6,
    "Disable memory region.\nArguments are the code numbers of the memory regions to disable.\nUsage: disable mem <code number>\nDo \"info mem\" to see current list of code numbers.", &VAR_2);




  FUNC_0 ("mem", VAR_0, VAR_5,
    "Delete memory region.\nArguments are the code numbers of the memory regions to delete.\nUsage: delete mem <code number>\nDo \"info mem\" to see current list of code numbers.", &VAR_1);




  FUNC_2 ("mem", VAR_8,
     "Memory region attributes");
}
