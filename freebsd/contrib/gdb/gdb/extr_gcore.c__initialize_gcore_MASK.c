
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,char*) ;
 int FUNC_1 (char*,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3 (void)
{
  FUNC_0 ("generate-core-file", VAR_0, VAR_1,
    "Save a core file with the current state of the debugged process.\nArgument is optional filename.  Default filename is 'core.<process_id>'.");



  FUNC_1 ("gcore", "generate-core-file", VAR_0, 1);
  FUNC_2 (VAR_2);
}
