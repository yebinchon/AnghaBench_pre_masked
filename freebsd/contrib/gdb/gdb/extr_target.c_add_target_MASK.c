
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int to_doc; int to_open; int to_shortname; int * to_xfer_partial; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int **) ;
 int FUNC_1 (char*,int ,int ,char*,int **,char*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct target_ops** VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int) ;

void
FUNC_4 (struct target_ops *VAR_10)
{

  if (VAR_10->to_xfer_partial == ((void*)0))
    VAR_10->to_xfer_partial = VAR_3;

  if (!VAR_8)
    {
      VAR_6 = VAR_0;
      VAR_8 = (struct target_ops **) FUNC_2
 (VAR_6 * sizeof (*VAR_8));
    }
  if (VAR_7 >= VAR_6)
    {
      VAR_6 *= 2;
      VAR_8 = (struct target_ops **)
 FUNC_3 ((char *) VAR_8,
    VAR_6 * sizeof (*VAR_8));
    }
  VAR_8[VAR_7++] = VAR_10;

  if (VAR_9 == ((void*)0))
    FUNC_1 ("target", VAR_1, VAR_5,
      "Connect to a target machine or process.\nThe first argument is the type or protocol of the target machine.\nRemaining arguments are interpreted by the target protocol.  For more\ninformation on the arguments for a particular protocol, type\n`help target ' followed by the protocol name.",




      &VAR_9, "target ", 0, &VAR_2);
  FUNC_0 (VAR_10->to_shortname, VAR_4, VAR_10->to_open, VAR_10->to_doc, &VAR_9);
}
