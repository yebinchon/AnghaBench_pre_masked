
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_map_offsets {int r_map_size; scalar_t__ r_map_offset; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 struct link_map_offsets* FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct cleanup*) ;
 int FUNC_2 (char*,int ) ;
 struct cleanup* FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,char*,int ) ;
 int VAR_1 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_6 (void)
{
  CORE_ADDR VAR_2 = 0;
  struct link_map_offsets *VAR_3 = FUNC_0 ();
  char *VAR_4 = FUNC_5 (VAR_3->r_map_size);
  struct cleanup *VAR_5 = FUNC_3 (VAR_1, VAR_4);

  FUNC_4 (VAR_0 + VAR_3->r_map_offset, VAR_4, VAR_3->r_map_size);


  VAR_2 = FUNC_2 (VAR_4, VAR_3->r_map_size);





  FUNC_1 (VAR_5);

  return (VAR_2);
}
