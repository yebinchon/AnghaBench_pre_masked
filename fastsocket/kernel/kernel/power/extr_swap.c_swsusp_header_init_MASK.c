
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_header {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct swsusp_header* VAR_1 ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_1 = (struct swsusp_header*) FUNC_0(VAR_0);
 if (!VAR_1)
  FUNC_1("Could not allocate memory for swsusp_header\n");
 return 0;
}
