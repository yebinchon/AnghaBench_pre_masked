
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_memory_data {scalar_t__ used; scalar_t__* client_size; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive *VAR_1, void *VAR_2)
{
 struct write_memory_data *VAR_3;
 VAR_3 = VAR_2;
 VAR_3->used = 0;
 if (VAR_3->client_size != ((void*)0))
  *VAR_3->client_size = VAR_3->used;

 if (-1 == FUNC_0(VAR_1))
  FUNC_1(VAR_1, 1);
 return (VAR_0);
}
