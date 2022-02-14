
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct property {char* name; unsigned int unique_id; struct property* next; } ;
struct TYPE_7__ {struct device_node* node; } ;
struct op_inode_info {TYPE_3__ u; } ;
struct inode {unsigned int i_ino; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
struct device_node {char* path_component_name; unsigned int unique_id; struct property* properties; struct device_node* sibling; struct device_node* child; TYPE_4__* parent; } ;
typedef int (* filldir_t ) (void*,char*,int,int,unsigned int,int ) ;
struct TYPE_8__ {unsigned int unique_id; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct op_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct file * VAR_4, void * VAR_5, filldir_t VAR_6)
{
 struct inode *VAR_7 = VAR_4->f_path.dentry->d_inode;
 struct op_inode_info *VAR_8 = FUNC_0(VAR_7);
 struct device_node *VAR_9 = VAR_8->u.node;
 struct device_node *VAR_10;
 struct property *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_1(&VAR_3);

 VAR_12 = VAR_7->i_ino;
 VAR_13 = VAR_4->f_pos;
 switch (VAR_13) {
 case 0:
  if (VAR_6(VAR_5, ".", 1, VAR_13, VAR_12, VAR_0) < 0)
   goto out;
  VAR_13++;
  VAR_4->f_pos++;

 case 1:
  if (VAR_6(VAR_5, "..", 2, VAR_13,
       (VAR_9->parent == ((void*)0) ?
        VAR_2 :
        VAR_9->parent->unique_id), VAR_0) < 0)
   goto out;
  VAR_13++;
  VAR_4->f_pos++;

 default:
  VAR_13 -= 2;


  VAR_10 = VAR_9->child;
  while (VAR_13 && VAR_10) {
   VAR_10 = VAR_10->sibling;
   VAR_13--;
  }
  while (VAR_10) {
   if (VAR_6(VAR_5,
        VAR_10->path_component_name,
        FUNC_3(VAR_10->path_component_name),
        VAR_4->f_pos, VAR_10->unique_id, VAR_0) < 0)
    goto out;

   VAR_4->f_pos++;
   VAR_10 = VAR_10->sibling;
  }


  VAR_11 = VAR_9->properties;
  while (VAR_13 && VAR_11) {
   VAR_11 = VAR_11->next;
   VAR_13--;
  }
  while (VAR_11) {
   if (VAR_6(VAR_5, VAR_11->name, FUNC_3(VAR_11->name),
        VAR_4->f_pos, VAR_11->unique_id, VAR_1) < 0)
    goto out;

   VAR_4->f_pos++;
   VAR_11 = VAR_11->next;
  }
 }
out:
 FUNC_2(&VAR_3);
 return 0;
}
