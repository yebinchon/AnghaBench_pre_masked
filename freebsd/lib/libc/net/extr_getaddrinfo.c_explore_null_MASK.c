
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afd {int a_loopback; int a_addrany; } ;
struct addrinfo {scalar_t__ ai_family; int ai_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct addrinfo*,struct afd const*,int ) ;
 int FUNC_1 (struct addrinfo*,char const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int,int ) ;
 scalar_t__ VAR_5 ;
 struct afd* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct addrinfo*) ;

__attribute__((used)) static int
FUNC_6(const struct addrinfo *VAR_6, const char *VAR_7,
    struct addrinfo **VAR_8)
{
 int VAR_9;
 const struct afd *VAR_10;
 struct addrinfo *VAR_11;
 int VAR_12;

 *VAR_8 = ((void*)0);
 VAR_11 = ((void*)0);

 if (VAR_6->ai_family == VAR_2)
  return (0);





 VAR_9 = FUNC_3(VAR_6->ai_family, VAR_4 | VAR_3, 0);
 if (VAR_9 < 0) {
  if (VAR_5 != VAR_1)
   return 0;
 } else
  FUNC_2(VAR_9);

 VAR_10 = FUNC_4(VAR_6->ai_family);
 if (VAR_10 == ((void*)0))
  return 0;

 if (VAR_6->ai_flags & VAR_0) {
  FUNC_0(VAR_11, VAR_10, VAR_10->a_addrany);
  FUNC_1(VAR_11, VAR_7);
 } else {
  FUNC_0(VAR_11, VAR_10, VAR_10->a_loopback);
  FUNC_1(VAR_11, VAR_7);
 }

 *VAR_8 = VAR_11;
 return 0;

free:
 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11);
 return VAR_12;
}
