
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line_map {int dummy; } ;
typedef int source_location ;
typedef int cpp_reader ;
typedef int cpp_hashnode ;
struct TYPE_2__ {int (* define ) (int ,char const*) ;} ;


 int FUNC_0 (struct line_map const*,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 struct line_map* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static void
FUNC_4 (cpp_reader *VAR_2, source_location VAR_3, cpp_hashnode *VAR_4)
{
  const struct line_map *VAR_5 = FUNC_2 (&VAR_1, VAR_3);
  (*VAR_0->define) (FUNC_0 (VAR_5, VAR_3),
     (const char *) FUNC_1 (VAR_2, VAR_4));
}
