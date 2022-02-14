
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_config {int flags; } ;
struct pt_block_decoder {int scache; int default_image; int * image; int query; int flags; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct pt_block_decoder*) ;
 int FUNC_2 (struct pt_config*,struct pt_config const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct pt_config*) ;
 int VAR_0 ;

int FUNC_6(struct pt_block_decoder *VAR_1,
   const struct pt_config *VAR_2)
{
 struct pt_config VAR_3;
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_2(&VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_1->flags = VAR_3.flags;


 VAR_4 = FUNC_0(&VAR_3.flags, &VAR_1->flags);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_5(&VAR_1->query, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_3(&VAR_1->default_image, ((void*)0));
 VAR_1->image = &VAR_1->default_image;

 VAR_4 = FUNC_4(&VAR_1->scache);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_1);

 return 0;
}
