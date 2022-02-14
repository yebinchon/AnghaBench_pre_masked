
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int queue; int release_rx_buf; int peek_rx_buf; int get_rx_buf; int * copy_rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 struct device* FUNC_3 (char const*,char*,int) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7 (const char *VAR_8, char *VAR_9, int VAR_10)
{
  struct device *VAR_11;
  VAR_11 = FUNC_3 (VAR_8, VAR_9, VAR_10);
  if (!VAR_11)
  {
    return (0);
  }
  return (1);
}
