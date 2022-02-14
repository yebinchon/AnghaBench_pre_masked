
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int rldram_csr_config_t ;
struct TYPE_8__ {int rld0_mbytes; int rld1_mbytes; int rld1_bunks; scalar_t__ rld0_bunks; } ;
typedef TYPE_1__ llm_descriptor_t ;
typedef int default_llm_desc ;
struct TYPE_9__ {scalar_t__ board_type; } ;
typedef TYPE_2__ cvmx_sysinfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(llm_descriptor_t *VAR_3)
{
    cvmx_sysinfo_t *VAR_4;
    VAR_4 = FUNC_5();
    llm_descriptor_t VAR_5;

    FUNC_6(&VAR_5, 0, sizeof(VAR_5));
    if (VAR_4->board_type == VAR_1)
    {
        FUNC_3("Skipping llm configuration for simulator.\n");
        return 0;
    }

    if (VAR_4->board_type == VAR_0)
    {


        FUNC_3("Warning: preliminary DFA memory configuration\n");
        FUNC_1();
        return(256*1024*1024);
    }




    if (!VAR_3)
    {

        if (0 > FUNC_4(&VAR_5))
            return -1;


        if (VAR_2 == 1)
   VAR_5.rld0_bunks = 0;

        FUNC_3("Using default LLM configuration for board %s (%d)\n", FUNC_2(VAR_4->board_type), VAR_4->board_type);

        VAR_3 = &VAR_5;
    }



    rldram_csr_config_t VAR_6;
    if (!FUNC_7(VAR_3, &VAR_6))
    {
        FUNC_3("Configuring %d llm port(s).\n", !!VAR_3->rld0_bunks + !!VAR_3->rld1_bunks);
        FUNC_8(&VAR_6);
    }
    else
    {
        FUNC_3("Error creating rldram configuration\n");
        return(-1);
    }






    if (!!VAR_3->rld0_bunks && !!VAR_3->rld1_bunks)
        VAR_3->rld0_mbytes = VAR_3->rld1_mbytes = FUNC_0(VAR_3->rld0_mbytes, VAR_3->rld1_mbytes);

    return(((!!VAR_3->rld0_bunks) * VAR_3->rld0_mbytes
          + (!!VAR_3->rld1_bunks) * VAR_3->rld1_mbytes) * 1024*1024);
}
