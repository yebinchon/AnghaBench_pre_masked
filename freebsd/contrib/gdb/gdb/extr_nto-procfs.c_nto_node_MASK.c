
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned
FUNC_3(void)
{
  unsigned VAR_3;

  if (FUNC_0(VAR_1, VAR_0) == 0)
    return VAR_0;

  VAR_3 = FUNC_2(VAR_2,0);
  if (VAR_3 == -1)
      FUNC_1 ("Lost the QNX node.  Debug session probably over.");

  return (VAR_3);
}
