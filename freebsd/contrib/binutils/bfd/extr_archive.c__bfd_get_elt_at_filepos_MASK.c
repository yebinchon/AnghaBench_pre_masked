
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct areltdata {int filename; struct areltdata* arelt_data; scalar_t__ origin; struct areltdata* my_archive; } ;
typedef int file_ptr ;
typedef struct areltdata bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct areltdata*,int ,struct areltdata*) ;
 struct areltdata* FUNC_1 (struct areltdata*) ;
 struct areltdata* FUNC_2 (struct areltdata*,int ) ;
 struct areltdata* FUNC_3 (struct areltdata*) ;
 int FUNC_4 (struct areltdata*,struct areltdata*) ;
 scalar_t__ FUNC_5 (struct areltdata*,int ,int ) ;
 scalar_t__ FUNC_6 (struct areltdata*) ;

bfd *
FUNC_7 (bfd *VAR_1, file_ptr VAR_2)
{
  struct areltdata *VAR_3;
  bfd *VAR_4;

  if (VAR_1->my_archive)
    {
      VAR_2 += VAR_1->origin;
      VAR_1 = VAR_1->my_archive;
    }

  VAR_4 = FUNC_2 (VAR_1, VAR_2);
  if (VAR_4)
    return VAR_4;

  if (0 > FUNC_5 (VAR_1, VAR_2, VAR_0))
    return ((void*)0);

  if ((VAR_3 = FUNC_3 (VAR_1)) == ((void*)0))
    return ((void*)0);

  VAR_4 = FUNC_1 (VAR_1);
  if (VAR_4 == ((void*)0))
    {
      FUNC_4 (VAR_1, VAR_3);
      return ((void*)0);
    }

  VAR_4->origin = FUNC_6 (VAR_1);
  VAR_4->arelt_data = VAR_3;
  VAR_4->filename = VAR_3->filename;

  if (FUNC_0 (VAR_1, VAR_2, VAR_4))
    return VAR_4;


  FUNC_4 (VAR_1, VAR_4);
  FUNC_4 (VAR_1, VAR_3);
  return ((void*)0);
}
