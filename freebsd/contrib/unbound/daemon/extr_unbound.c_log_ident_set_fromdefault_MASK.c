
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {scalar_t__* log_identity; } ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static void
FUNC_1(struct config_file* VAR_0,
 const char *VAR_1)
{
 if(VAR_0->log_identity == ((void*)0) || VAR_0->log_identity[0] == 0)
  FUNC_0(VAR_1);
 else
  FUNC_0(VAR_0->log_identity);
}
