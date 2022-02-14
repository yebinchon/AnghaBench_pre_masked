
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_memory_data {scalar_t__ used; scalar_t__ size; scalar_t__ buff; scalar_t__* client_size; } ;
struct archive {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,char*) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive *VAR_2, void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct write_memory_data *VAR_6;
 VAR_6 = VAR_3;

 if (VAR_6->used + VAR_5 > VAR_6->size) {
  FUNC_0(VAR_2, VAR_1, "Buffer exhausted");
  return (VAR_0);
 }
 FUNC_1(VAR_6->buff + VAR_6->used, VAR_4, VAR_5);
 VAR_6->used += VAR_5;
 if (VAR_6->client_size != ((void*)0))
  *VAR_6->client_size = VAR_6->used;
 return (VAR_5);
}
