
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct ubifs_data_node {int size; int compr_type; int data; TYPE_1__ ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*,int,int *,int*,int*) ;
 int FUNC_8 (int *,int,void*,int*,int) ;

__attribute__((used)) static int FUNC_9(struct ubifs_data_node *VAR_5, int *VAR_6)
{
 void *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = FUNC_5(VAR_5->size);
 VAR_7 = FUNC_3(VAR_11 * VAR_4, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_5->ch.len) - VAR_3;
 VAR_10 = FUNC_4(VAR_5->compr_type);
 VAR_8 = FUNC_8(&VAR_5->data, VAR_9, VAR_7, &VAR_11, VAR_10);
 if (VAR_8)
  goto out;

 FUNC_7(VAR_7, *VAR_6, &VAR_5->data, &VAR_11, &VAR_10);
 FUNC_6(VAR_11 <= VAR_2);
 VAR_5->compr_type = FUNC_0(VAR_10);
 VAR_5->size = FUNC_1(*VAR_6);
 *VAR_6 = VAR_3 + VAR_11;
out:
 FUNC_2(VAR_7);
 return VAR_8;
}
