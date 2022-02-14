
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct opncls {int (* stat ) (struct bfd*,int ,struct stat*) ;int stream; } ;
struct bfd {struct opncls* iostream; } ;


 int FUNC_0 (struct stat*,int ,int) ;
 int FUNC_1 (struct bfd*,int ,struct stat*) ;

__attribute__((used)) static int
FUNC_2 (struct bfd *VAR_0, struct stat *VAR_1)
{
  struct opncls *VAR_2 = VAR_0->iostream;

  FUNC_0 (VAR_1, 0, sizeof (*VAR_1));
  if (VAR_2->stat == ((void*)0))
    return 0;

  return (VAR_2->stat) (VAR_0, VAR_2->stream, VAR_1);
}
