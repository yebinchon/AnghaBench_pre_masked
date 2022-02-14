
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct g_journal_softc {int sc_journal_offset; int sc_journal_next_id; int sc_journal_id; struct g_consumer* sc_jconsumer; } ;
struct g_journal_header {int jh_journal_next_id; int jh_journal_id; int jh_magic; } ;
struct g_consumer {TYPE_1__* provider; } ;
struct TYPE_2__ {scalar_t__ sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_journal_header*,int *) ;
 int FUNC_1 (struct g_consumer*,int ,int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct g_journal_softc *VAR_2)
{
 struct g_journal_header VAR_3;
 struct g_consumer *VAR_4;
 u_char *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->sc_jconsumer;
 VAR_5 = FUNC_3(VAR_4->provider->sectorsize, VAR_1);

 FUNC_4(VAR_3.jh_magic, VAR_0, sizeof(VAR_3.jh_magic));
 VAR_3.jh_journal_id = VAR_2->sc_journal_id;
 VAR_3.jh_journal_next_id = VAR_2->sc_journal_next_id;
 FUNC_0(&VAR_3, VAR_5);
 VAR_6 = FUNC_1(VAR_4, VAR_2->sc_journal_offset, VAR_5,
     VAR_4->provider->sectorsize);

 VAR_2->sc_journal_offset += VAR_4->provider->sectorsize;

 FUNC_2(VAR_5, VAR_4->provider->sectorsize);
 return (VAR_6);
}
