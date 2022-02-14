
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int persistent_count; scalar_t__ mudflap_mode; scalar_t__ print_leaks; scalar_t__ collect_stats; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ,int ,int *,int ) ;
 unsigned int VAR_8 ;
 int* VAR_9 ;
 scalar_t__** VAR_10 ;
 TYPE_1__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int FUNC_2 () ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,char*,unsigned int,...) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;

void
FUNC_4 ()
{
  if (VAR_11.collect_stats)
    {
      FUNC_3 (VAR_16,
               "*******\n"
               "mudflap stats:\n"
               "calls to __mf_check: %u\n"
               "         __mf_register: %d [%dB, %dB, %dB, %dB, %dB]\n"
               "         __mf_unregister: %d [%dB]\n"
               "         __mf_violation: [%d, %d, %d, %d, %d]\n",
               VAR_4,
               VAR_5,
               VAR_13[0], VAR_13[1],
               VAR_13[2], VAR_13[3],
               VAR_13[4],
               VAR_6, VAR_14,
               VAR_7[0], VAR_7[1],
               VAR_7[2], VAR_7[3],
               VAR_7[4]);

      FUNC_3 (VAR_16,
               "calls with reentrancy: %u\n", VAR_12);






      {
        unsigned VAR_17;
        unsigned VAR_18 = 0;
        unsigned VAR_19 = 0;
        unsigned VAR_20 = 0;

        for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
          {
            if (VAR_9[VAR_17])
              VAR_19 ++;
            else
              VAR_20 ++;
            if (VAR_18 < VAR_9[VAR_17])
              VAR_18 = VAR_9[VAR_17];
          }
        FUNC_3 (VAR_16, "lookup cache slots used: %u  unused: %u  peak-reuse: %u\n",
                 VAR_19, VAR_20, VAR_18);
      }

      {
        unsigned VAR_21;
        VAR_21 = FUNC_1 (VAR_2, VAR_1, ((void*)0), 0);
        FUNC_3 (VAR_16, "number of live objects: %u\n", VAR_21);
      }

      if (VAR_11.persistent_count > 0)
        {
          unsigned VAR_22 = 0;
          unsigned VAR_23, VAR_24;
          for (VAR_23 = 0; VAR_23 <= VAR_3; VAR_23 ++)
            for (VAR_24 = 0 ; VAR_24 < VAR_11.persistent_count; VAR_24 ++)
              if (VAR_10 [VAR_23][VAR_24] != 0)
                VAR_22 ++;
          FUNC_3 (VAR_16, "          zombie objects: %u\n", VAR_22);
        }
    }
  if (VAR_11.print_leaks && (VAR_11.mudflap_mode == VAR_15))
    {
      unsigned VAR_25;
      extern void * FUNC_0 (size_t VAR_26);


      FUNC_0 (0);
      FUNC_0 (((void*)0));
      VAR_25 = FUNC_2 ();
      FUNC_3 (VAR_16, "number of leaked objects: %u\n", VAR_25);
    }
}
