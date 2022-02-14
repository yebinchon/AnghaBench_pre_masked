
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int static_psymbols; int global_psymbols; } ;
struct dieinfo {int die_tag; int at_name; int has_at_byte_size; int at_low_pc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int ,int ,int ,struct objfile*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct dieinfo *VAR_7, struct objfile *VAR_8)
{
  switch (VAR_7->die_tag)
    {
    case 134:
      FUNC_0 (VAR_7->at_name, FUNC_1 (VAR_7->at_name),
      VAR_4, VAR_0,
      &VAR_8->global_psymbols,
      0, VAR_7->at_low_pc, VAR_5, VAR_8);
      break;
    case 133:
      FUNC_0 (VAR_7->at_name, FUNC_1 (VAR_7->at_name),
      VAR_4, VAR_1,
      &VAR_8->global_psymbols,
      0, 0, VAR_5, VAR_8);
      break;
    case 130:
      FUNC_0 (VAR_7->at_name, FUNC_1 (VAR_7->at_name),
      VAR_4, VAR_0,
      &VAR_8->static_psymbols,
      0, VAR_7->at_low_pc, VAR_5, VAR_8);
      break;
    case 132:
      FUNC_0 (VAR_7->at_name, FUNC_1 (VAR_7->at_name),
      VAR_4, VAR_1,
      &VAR_8->static_psymbols,
      0, 0, VAR_5, VAR_8);
      break;
    case 129:
      FUNC_0 (VAR_7->at_name, FUNC_1 (VAR_7->at_name),
      VAR_4, VAR_2,
      &VAR_8->static_psymbols,
      0, 0, VAR_5, VAR_8);
      break;
    case 136:
    case 131:
    case 128:
    case 135:

      if (!VAR_7->has_at_byte_size)
 break;
      FUNC_0 (VAR_7->at_name, FUNC_1 (VAR_7->at_name),
      VAR_3, VAR_2,
      &VAR_8->static_psymbols,
      0, 0, VAR_5, VAR_8);
      if (VAR_5 == VAR_6)
 {

   FUNC_0 (VAR_7->at_name, FUNC_1 (VAR_7->at_name),
          VAR_4, VAR_2,
          &VAR_8->static_psymbols,
          0, 0, VAR_5, VAR_8);
 }
      break;
    }
}
