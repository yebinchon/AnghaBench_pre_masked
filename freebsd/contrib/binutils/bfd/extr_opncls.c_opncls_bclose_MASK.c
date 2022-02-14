
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opncls {int (* close ) (struct bfd*,int ) ;int stream; } ;
struct bfd {struct opncls* iostream; } ;


 int FUNC_0 (struct bfd*,int ) ;

__attribute__((used)) static int
FUNC_1 (struct bfd *VAR_0)
{
  struct opncls *VAR_1 = VAR_0->iostream;


  int VAR_2 = 0;
  if (VAR_1->close != ((void*)0))
    VAR_2 = (VAR_1->close) (VAR_0, VAR_1->stream);
  VAR_0->iostream = ((void*)0);
  return VAR_2;
}
