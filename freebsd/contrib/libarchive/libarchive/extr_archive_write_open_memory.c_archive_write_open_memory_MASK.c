
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_memory_data {size_t size; size_t* client_size; void* buff; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,char*) ;
 int FUNC_1 (struct archive*,struct write_memory_data*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_3(struct archive *VAR_5, void *VAR_6, size_t VAR_7, size_t *VAR_8)
{
 struct write_memory_data *VAR_9;

 VAR_9 = (struct write_memory_data *)FUNC_2(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_5, VAR_1, "No memory");
  return (VAR_0);
 }
 VAR_9->buff = VAR_6;
 VAR_9->size = VAR_7;
 VAR_9->client_size = VAR_8;
 return (FUNC_1(VAR_5, VAR_9,
      VAR_4, VAR_2, VAR_3));
}
