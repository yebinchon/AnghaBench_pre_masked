
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,void*,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(off_t VAR_3, void *VAR_4)
{
 ssize_t VAR_5;






 VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_2, (VAR_3 * 512));
 if (VAR_5 == VAR_2)
  return (0);

 if (FUNC_0("PART") != 0)
  FUNC_2("Failed to write MBR. Try to use gpart(8).");
 else
  FUNC_2("Failed to write sector zero");
 return(VAR_0);
}
