
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t const uintmax_t ;
struct tmpfs_node {int dummy; } ;
struct tmpfs_mount {size_t tm_pages_used; scalar_t__ tm_nodes_inuse; } ;
struct tmpfs_dirent {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t const,int ) ;

size_t
FUNC_1(struct tmpfs_mount *VAR_1)
{
 const size_t VAR_2 = sizeof(struct tmpfs_node) +
     sizeof(struct tmpfs_dirent);
 size_t VAR_3;

 VAR_3 = FUNC_0((uintmax_t)VAR_1->tm_nodes_inuse * VAR_2,
     VAR_0);
 return (VAR_3 + VAR_1->tm_pages_used);
}
