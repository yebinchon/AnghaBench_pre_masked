
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 size_t FUNC_1 (int,void*,size_t) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, void *VAR_2, size_t VAR_3, const char *VAR_4)
{
 ssize_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  FUNC_0(VAR_0, "write_file: %s", VAR_4);
 if (VAR_5 < VAR_3)
  FUNC_0(VAR_0, "write_file: short write: %s", VAR_4);
}
