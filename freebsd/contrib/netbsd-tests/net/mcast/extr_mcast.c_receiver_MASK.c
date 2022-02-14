
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;
struct message {size_t seq; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int msg ;


 int FUNC_0 (int ,char*,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,char const*,int ,int *,int) ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (int,struct message*,int,int ) ;
 int FUNC_4 (int,struct message*,int,int ,void*,int *) ;
 int FUNC_5 (char*,struct message*) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int const,int) ;

__attribute__((used)) static void
FUNC_8(const int VAR_6, const char *VAR_7, const char *VAR_8, size_t VAR_9, bool VAR_10,
    bool VAR_11)
{
 int VAR_12;
 ssize_t VAR_13;
 size_t VAR_14;
 struct message VAR_15;
 struct pollfd VAR_16;
 socklen_t VAR_17;

 VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_2, &VAR_17, VAR_11);
 VAR_16.fd = VAR_12;
 VAR_16.events = VAR_1;


 FUNC_7(VAR_6, 0);

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  if (FUNC_2(&VAR_16, 1, 10000) == -1)
   FUNC_0(VAR_0, "poll (%s)", FUNC_6(VAR_4));
  VAR_13 = VAR_10 ? FUNC_3(VAR_12, &VAR_15, sizeof(VAR_15), 0) :
      FUNC_4(VAR_12, &VAR_15, sizeof(VAR_15), 0, (void *)&VAR_5, &VAR_17);
  if (VAR_13 == -1)
   FUNC_0(VAR_0, "recv (%s)", FUNC_6(VAR_4));
  if (VAR_3)
   FUNC_5("got", &VAR_15);
  if (VAR_14 != VAR_15.seq)
   FUNC_0(VAR_0, "seq: expect=%zu actual=%zu",
       VAR_14, VAR_15.seq);
 }


 FUNC_7(VAR_6, 0);
}
