
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int md; } ;
struct header_file_location {int dummy; } ;


 struct header_file_location* VAR_0 ;
 int VAR_1 ;
 struct header_file_location* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1 (int VAR_3, struct objfile *VAR_4)
{
  VAR_1 = VAR_3;
  VAR_2 = VAR_0 = (struct header_file_location *)
    FUNC_0 (VAR_4->md, VAR_1 * sizeof (struct header_file_location));
}
